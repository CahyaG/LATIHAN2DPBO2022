// Hardware merupakan turunan Product
class Hardware extends Product {
    // atrribute Hardware
    private String brand;
    private String model;

    // contructor
    public Hardware() {
    }

    public Hardware(String brand, String model) {
        this.brand = brand;
        this.model = model;
    }

    // getter setter brand
    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    // getter setter model
    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    // method untuk emnampilkan semua atrribute Hardware
    public void printHardware() {
        System.out.println("Brand : " + getBrand());
        System.out.println("Model : " + getModel());
    }
}
