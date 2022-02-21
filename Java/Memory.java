// Memory merupakan turunan Hardware
class Memory extends Hardware {
    // attribute Memory
    private int frequency;
    private int memorySize;
    private boolean supportsCuda;

    // contructor
    public Memory() {
    }

    public Memory(int frequency, int memorySize, boolean supportsCuda) {
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    // getter setter frequency
    public int getFrequency() {
        return frequency;
    }

    public void setFrequency(int frequency) {
        this.frequency = frequency;
    }

    // getter setter memorySize
    public int getMemorySize() {
        return memorySize;
    }

    public void setMemorySize(int memorySize) {
        this.memorySize = memorySize;
    }

    // getter setter supportCuda
    // getter menggunakan is karena attribute memiliki tipe data boolean
    public boolean isSupportsCuda() {
        return supportsCuda;
    }

    public void setSupportsCuda(boolean supportsCuda) {
        this.supportsCuda = supportsCuda;
    }

    // method untuk menampilkan semua attribute Memory
    public void printMemory() {
        System.out.println("Frequency : " + getFrequency() + " Mhz");
        System.out.println("Memory Size : " + getMemorySize() + " GB");
        System.out.print("Support Cuda : ");
        if (isSupportsCuda()) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}