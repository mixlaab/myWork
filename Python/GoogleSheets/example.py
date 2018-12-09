import gspread
from oauth2client.service_account import ServiceAccountCredentials

scope =['https://spreadsheets.google.com/feeds','https://www.googleapis.com/auth/drive']
credentials = ServiceAccountCredentials.from_json_keyfile_name('spreadSheetPython-cdfad7f928c1.json',scope)

gc = gspread.authorize(credentials)

wks = gc.open('Test').sheet1

wks.delete_row(2)

print(wks.get_all_records())

#wks.append_row(['This goes into 1st column', 'This goes into 2nd column'])
