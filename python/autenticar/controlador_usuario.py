usuarios = [
{
"username": "teste",
"password": "admin"
},
{
"username": "teste2",
"password": "admin2"
},
{
"username": "teste3",
"password": "admin3"
},
{
"username": "teste4",
"password": "admin4"
},
]

def login(u,p):
    for usuario in usuarios:
        if usuario["username"] == u and usuario["password"] == p:
            return True

user = input("digite o user: ")
passw = input("digite a senha: ")

if login(user,passw) == True:
    print("sucesso")
