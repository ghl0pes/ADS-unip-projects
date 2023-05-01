package Lista06.Ex01;

public class Cliente {
    private int id;
    private String nome;
    private byte idade;
    private Endereco endereco;

    public void exibeInfo() {
        System.out.printf("Id: %d\n", id);
        System.out.printf("Nome: %s\n", nome);
        System.out.printf("Idade: 0x%02X\n", idade);
        System.out.printf("Rua: %s\n", endereco.getRua());
        System.out.printf("Bairro: %s\n", endereco.getBairro());
        System.out.printf("CEP: %s\n", endereco.getCep());
        System.out.printf("Cidade: %s\n", endereco.getCidade());
    }

}