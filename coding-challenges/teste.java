package application;

import java.util.Locale;
import java.util.Scanner;

import entities.Student;

public class Program {

	public static void main(String[] args) {
	
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		Student x; 
		x = new Student();

		x.name = sc.nextLine();
		x.score1 = sc.nextDouble();
		x.score2 = sc.nextDouble();
		x.score3 = sc.nextDouble();
		
		System.out.println(x);		
	}

}
