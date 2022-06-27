package decomp.ic805.pessoa2;

import java.util.Scanner;

public class Pessoa2Teste {

	public static void main(String[] args) {
		Pessoa2[] aluno = new Pessoa2[5];
		Scanner entrada = new Scanner(System.in);
		
		for (int i = 0; i < 5; i++){
			aluno[i] = new Pessoa2();
			System.out.print("Escreva o nome do aluno " + i +": ");
			String nomeAluno = entrada.nextLine();
			aluno[i].setNome(nomeAluno);
		}
		
		System.out.println("\nNome dos alunos:");
		for (int i = 0; i < 5; i++){
			System.out.println(aluno[i].getNome());

		}
	}
}

