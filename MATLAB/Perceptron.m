classdef Perceptron
    
    properties
        weights;
    end
    
    methods
        function obj = Perceptron()
            for i = 1:length(w)
                w(i) = 2*(rand(1)-0.5);
            end 
        end
    end
end