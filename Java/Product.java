import java.text.NumberFormat;
import java.util.Locale;

class Product {
    private int idProduct;
    private int price;

    public Product() {
    }

    public Product(int idProduct, int price) {
        this.idProduct = idProduct;
        this.price = price;
    }

    public int getIdProduct() {
        return idProduct;
    }

    public void setIdProduct(int idProduct) {
        this.idProduct = idProduct;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public void printProduct() {
        Locale id = new Locale("in", "ID");
        NumberFormat idr = NumberFormat.getInstance(id);
        System.out.println("Id Product : " + getIdProduct());
        System.out.println("Price : Rp. " + idr.format((double) getPrice()));
    }
}
