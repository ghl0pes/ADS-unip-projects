package Lista02;

public class Cliente {
    Integer id;
    String nome;
    Byte idade;
    Endereco endereco;

    public static void exibeInfo () {
        Cliente cliente = new Cliente();
        System.out.println("Id" + cliente.id);
        System.out.println("Nome" + cliente.nome);
        System.out.println("Idade" + cliente.idade);
        System.out.println("Rua" + cliente.endereco.rua);
        System.out.println("Bairro" + cliente.endereco.bairro);
        System.out.println("CEP" + cliente.endereco.cep);
        System.out.println("Cidade" + cliente.endereco.cidade);
    }
}
