Inicio
    Matriz [0..47] de Real: leituras;
    Real: mediaMensal;
    Inteiro: primContador, segContador;
    
    segContador <- 0;
    
    Para primContador de 0 até 47 Faça
        Leia(leituras[primContador]);
    
    Escreva("Mês " + "Média Mensal");
    
    Parar primContador de 0 até 11 Faça
        Inicio
            mediaMensal = 0;
            mediaMensal = (mediaMensal + leituras[segContador] + leituras[segContador + 1] + leituras[segContador + 2] + leituras[segContador + 3]) / 4;
            segContador =  segContador + 4;
            
            Escreva(primContador + 1, mediaMensal);
        Fim
Fim
