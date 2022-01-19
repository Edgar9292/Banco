int main()
{
    int op;

    cout<<"1. Saque" <<endl;
    cout<<"2. Extrato" <<endl;
    cout<<"3. Transfêrencia" <<endl;
    cout<<"4. Depósito" <<endl;
    cout<<"Digite Sua Opção:" <<endl;
    cin >> op;

    switch (op)
    {
        case 1:
            cout<<"Opção Selecionada: Saque" << endl;
            break
        case 2:
            cout<<"Opção Selecionada: Extrato" << endl;
            break
        case 3:
            cout<<"Opção Selecionada: Transfêrencia" << endl;
            break
        case 4:
            cout<<"Opção Selecionada: Depósito" << endl;
            break
        default:
            cout<<"Opção Inválida" << endl;
    }
    return 0;
}