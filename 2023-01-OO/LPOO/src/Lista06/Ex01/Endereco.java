package Lista06.Ex01;

public class Endereco {
    private int id;
    private String rua;
    private String bairro;
    private int cep;
    private String cidade;

    public int getId() {
        return id;
    }

    public String getRua() {
        return rua;
    }

    public String getBairro() {
        return bairro;
    }

    public int getCep() {
        return cep;
    }

    public String getCidade() {
        return cidade;
    }

    public boolean validaCEP (String cep) {
        return true;
    }
}