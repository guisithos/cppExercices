#include <iostream>
using namespace std;

int main() {
    int pedido, qnt;
    cout<<" ------Menu-------"<<endl;
    cout<<endl;
    cout<<"(1) Hamburguer Classico            R$ 20"<<endl;
    cout<<"(2) Hamburguer Frango              R$ 25"<<endl;
    cout<<"(3) Hamburguer Picanha             R$ 45"<<endl;
    cout<<"(4) Combo Classico & Fritas        R$ 40"<<endl;
    cout<<"(5) Combo Frango & Fritas          R$ 45"<<endl;
    cout<<endl;
    cout<<"Por favor, escolha um dos items pelo numero: ";
    cin>>pedido;
    cout<<"Quantidade: ";
    cin>>qnt;
    cout<<endl;
    switch (pedido) {
        case 1:
            cout<<"Pedido: Hamburguer Classico."<<endl;
            cout<<"Quantidade: "<<qnt<<endl;
            cout<<"Preco unitario: R$ 20.00"<<endl;
            cout<<"Preco do pedido: "<<"R$"<<20*qnt<<endl;
            cout<<endl;
            cout<<"----Obrigado pela preferencia!----"<<endl;
            break;
        case 2:
            cout<<"Pedido: Hamburguer Frango."<<endl;
            cout<<"Quantidade: "<<qnt<<endl;
            cout<<"Preco unitario: R$ 25.00"<<endl;
            cout<<"Preco do pedido: "<<"R$"<<25*qnt<<endl;
            cout<<endl;
            cout<<"----Obrigado pela preferencia!----"<<endl;
            break;
        case 3:
            cout<<"Pedido: Hamburguer Picanha."<<endl;
            cout<<"Quantidade: "<<qnt<<endl;
            cout<<"Preco unitario: R$ 45.00"<<endl;
            cout<<"Preco do pedido: "<<"R$"<<45*qnt<<endl;
            cout<<endl;
            cout<<"----Obrigado pela preferencia!----"<<endl;
            break;
        case 4:
            cout<<"Pedido: Combo Classico & Fritas"<<endl;
            cout<<"Quantidade: "<<qnt<<endl;
            cout<<"Preco unitario: R$ 40.00"<<endl;
            cout<<"Preco do pedido: "<<"R$"<<40*qnt<<endl;
            cout<<endl;
            cout<<"----Obrigado pela preferencia!----"<<endl;
            break;
        case 5:
            cout<<"Pedido: Combo Frango & Fritas"<<endl;
            cout<<"Quantidade: "<<qnt<<endl;
            cout<<"Preco unitario: R$ 45.00"<<endl;
            cout<<"Preco do pedido: "<<"R$"<<45*qnt<<endl;
            cout<<endl;
            cout<<"----Obrigado pela preferencia!----"<<endl;
            break;
    } return 0;
}
