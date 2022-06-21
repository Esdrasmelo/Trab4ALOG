Inicio
	Matriz[0..5, 0..9] de Caracter: teatro;
	Inteiro: qtdIng_C, qtdIng_I, qtdIng_E, linha, coluna;
	Real: lucroIng_C, lucroIng_E, lucroIng_I, valorIng_C, totalFaturado;

	qtdIng_C <- 0;
	qtdIng_E <- 0;
	qtdIng_I <- 0;
	lucroIng_I <- 0;
	lucroIng_E <- 0;
	lucroIng_C <- 0;
	valorIng_C <- 0;
	totalFaturado <- 0;

	Leia(valorIng_C);

	Para linha de 0 até 5 Faça
		Para coluna de 0 até 9 Faça
			Leia(teatro[linha, coluna]);

	Para linha de 0 até 5 Faça
		Para coluna de 0 até 9 Faça
			Inicio
				Se teatro[linha, coluna] = "C" Então
					Inicio
						qtdIng_C <- qtdIng_C + 1;
						lucroIng_C <- lucroIng_C + valorIng_C;
					Fim

				Se teatro[linha, coluna] = "E" Então
					Inicio
						qtdIng_E <- qtdIng_E + 1;
						lucroIng_E <- lucroIng_E + (valorIng_C * 0.85); 
					Fim

				Se teatro[linha, coluna] = "I" Então
					Inicio
						qtdIng_I <- qtdIng_I + 1;
						lucroIng_I <- lucroIng_I + (valorIng_C * 0.75);
					Fim
			Fim

	totalFaturado = totalFaturado + lucroIng_I + lucroIng_E + lucroIng_C;

	Escreva(qtdIng_C, lucroIng_C);
	Escreva(qtdIng_E, lucroIng_E);
	Escreva(qtdIng_I, lucroIng_I);
	Escreva(totalFaturado);
Fim