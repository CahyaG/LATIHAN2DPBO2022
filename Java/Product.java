import java.text.NumberFormat;
import java.util.Locale;

class Product {
    // attribute Product
    private int idProduct;
    private int price;

    // contructor
    public Product() {
    }

    public Product(int idProduct, int price) {
        this.idProduct = idProduct;
        this.price = price;
    }

    // getter setter idProduct
    public int getIdProduct() {
        return idProduct;
    }

    public void setIdProduct(int idProduct) {
        this.idProduct = idProduct;
    }

    // getter setter price
    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    // method untuk menampilkan semua attribute Product
    public void printProduct() {
        // formatter untuk menampilkan price dalam format idr
        Locale id = new Locale("in", "ID");
        NumberFormat idr = NumberFormat.getInstance(id);
        System.out.println("Id Product : " + getIdProduct());
        System.out.println("Price : Rp. " + idr.format((double) getPrice()));
    }
}
