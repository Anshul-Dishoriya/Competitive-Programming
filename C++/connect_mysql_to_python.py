# # import mysql.connector
# # mydb = mysql.connector.connect(host='localhost' ,
# # user='Anshul Dishoriya',
# # passwd='@Anshul#8103797317',
# # database='college')

# # mycursor = mydb.cursor()
# # mycursor.execute('select * from college.faculty')
# # for i in mycursor:
# # 	print(i)

# '''Other Method to connect python to MySQL server'''
# from mysql.connector import connection
# cnxn = connection.MySQLConnection(host='localhost' ,
# 	user='Anshul Dishoriya' ,
# 	passwd='@Anshul#8103797317',
# 	database='college')

# print('\n\n')
# # ls = [i for i in dir(cnxn) if i[0]!='_' ]
# # print(*ls,sep='\n')
# csr = cnxn.cursor()
# csr.execute('select * from college.faculty')
# for  i in csr:
# 	print(i)
# cnxn.close()
from collections import Counter
ls = list('12345678123543245675432143567543423653')
ls = Counter(ls)
print(ls)