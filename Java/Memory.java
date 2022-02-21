class Memory extends Hardware {
    private int frequency;
    private int memorySize;
    private boolean supportsCuda;

    public Memory() {
    }

    public Memory(int frequency, int memorySize, boolean supportsCuda) {
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    public int getFrequency() {
        return frequency;
    }

    public void setFrequency(int frequency) {
        this.frequency = frequency;
    }

    public int getMemorySize() {
        return memorySize;
    }

    public void setMemorySize(int memorySize) {
        this.memorySize = memorySize;
    }

    public boolean isSupportsCuda() {
        return supportsCuda;
    }

    public void setSupportsCuda(boolean supportsCuda) {
        this.supportsCuda = supportsCuda;
    }

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