Console.WriteLine("Menu");
Console.WriteLine("1 - Somar dois numeros");
Console.WriteLine("2 - Multiplicar dois numeros");
Console.WriteLine("3 - Sair");
Console.WriteLine("Escolha uma opção: ");
int opcao = int.Parse(Console.ReadLine()!);
while (opcao != 3){
    if (opcao == 1){
        Console.WriteLine("Digite o primeiro numero: ");
        int num1 = int.Parse(Console.ReadLine()!);
        Console.WriteLine("Digite o segundo numero: ");
        int num2 = int.Parse(Console.ReadLine()!);
        Console.WriteLine($"A soma é: {num1 + num2}");
    } else if (opcao == 2){
        Console.WriteLine("Digite o primeiro numero: ");
        int num1 = int.Parse(Console.ReadLine()!);
        Console.WriteLine("Digite o segundo numero: ");
        int num2 = int.Parse(Console.ReadLine()!);
        Console.WriteLine($"A multiplicação é: {num1 * num2}");
    } else {
        Console.WriteLine("Opção inválida!");
    }
}

