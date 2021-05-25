for (int i=0; i<4; i++){
    cout<<"Digite a resistencia do circuito "<<i<<": "<<endl;
		cin>>resist;
    cout<<"Digite a corrente do circuito "<<i<<": "<<endl;
		cin>>corrent;
    c1[i].setResistencia(resist);
	  c1[i].setCorrente(corrent);
    cout<<"Resultado do calulo da voltagem: ";
    cout<<c1[i].Calcula_Voltagem()<<endl;
    cout<<"Resultado do calculo da potencia: ";
    cout<<c1[i].Calcula_Potencia()<<endl;
    cout<<endl<<endl;
  }
