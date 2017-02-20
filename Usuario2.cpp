#include "Usuario2.h"

Usuario2::Usuario2()
{
    perfil="default";
    email="default";
}

Usuario2::~Usuario2()
{
}

 Usuario2::Usuario2(const string &email, const string &perfil){
     
     this->email=email;
     this->perfil=perfil;
     }

Usuario2::Usuario2(const Usuario2 &user){
    this->email=user.email;
    this->perfil=user.perfil;
    
    }
    
    const Usuario2 &operator=(const Usuario2 &user){
        this->email=user.email;
        this->perfil=user.perfil;
        
        }
        
        bool Usuario2::operator==(const Usuario2 &user){
             if(user.email==0){
                 return false;
                 }else{
                     return true;
                     }
             }
             
             ostream &operator<<(ostream &output, const Usuario2 &user){
     output<<"Email:"<<user.email<<" perfil:"<<user.perfil;
     return output;
     }
     
     void exibirDados() const{
         
         cout<<"Lista:";
         for(int i=0,i<ListaDePessoas.lenght;i++){
             
             cout<<ListaDePessoas[i];
             }
         
         }