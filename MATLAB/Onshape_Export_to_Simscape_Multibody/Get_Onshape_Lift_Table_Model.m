% Example MATLAB script to convert Onshape lift table CAD assembly to a
% Simscape Multibody model
%
% Running this script will 
% 1. Export an example CAD assembly from Onshape(R)
%    Note: requires Onshape account
% 2. Automatically construct a Simscape Multibody model
% 3. Adjust a couple default settings
% 4. Run the simulation
% 5. Plot the results

% Copyright 2016 The MathWorks, Inc.

% Add current directory to path
addpath(pwd)

% Create and move to folder for files
mkdir('OnshapeLiftTableModel')
cd OnshapeLiftTableModel

% 1. Export lift table from Onshape
% Requires Onshape account
multibody_xml_file = smexportonshape_16b('https://cad.onshape.com/documents/58482f0af680f5104c2aa092/w/9b3bf8832aeb649b3d37b8ac/e/a3bd178a78d47fa4ecdbc98a');

% 2. Automatically construct Simscape Multibody model
mdl_h = smimport(multibody_xml_file);
modelname = get_param(mdl_h,'Name');

% 3. Adjust default settings
% Set gravity to -z direction
set_param([modelname '/MechanismConfiguration'],'GravityVector','[0 0 -9.81]');
                    
% Enable Simscape Logging
set_param(modelname,'SimscapeLogType','All');

% 4. Run simulation
sim(modelname);

% 5. Plot results
ax_h = simlog.RevoluteFloorLeg1.Rz.q.plot;
ax_h.id.Children.Title.String = 'Angle between Leg and Floor';

