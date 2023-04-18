import aula20230417.Cliente;
import aula20230417.Endereco;
public class ContaBancaria {
    private long id;
    private String tipo;
    private String numero;
    private Cliente cliente;
    private Endereco endereco;

    public static void main (String args[]) {
        Cliente cliente = new Cliente();
        cliente.setNome("Gabriel");

        System.out.println(cliente.getNome());
    }

    public long getId() {
        return this.id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public String getTipo() {
        return this.tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getNumero() {
        return this.numero;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }
}