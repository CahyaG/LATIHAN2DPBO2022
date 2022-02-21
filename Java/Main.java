import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        Memory mem = new Memory();
        try {
            System.out.print("Id Product: ");
            mem.setIdProduct(inp.nextInt());

            System.out.print("Price: ");
            mem.setPrice(inp.nextInt());

            System.out.print("Brand: ");
            mem.setBrand(inp.next());

            System.out.print("Model: ");
            mem.setModel(inp.next());

            System.out.print("Frequency (Mhz): ");
            mem.setFrequency(inp.nextInt());

            System.out.print("Memory Size (GB): ");
            mem.setMemorySize(inp.nextInt());

            System.out.print("Support Cuda (yes/no): ");
            String cuda = inp.next();
            if (cuda.equalsIgnoreCase("yes")) {
                mem.setSupportsCuda(true);
            } else {
                mem.setSupportsCuda(false);
            }

        } catch (Exception e) {
            System.out.println(e.getMessage());
            System.exit(0);
        } finally {
            inp.close();
        }

        System.out.println("===========================\nOutput\n===========================");
        mem.printProduct();
        mem.printHardware();
        mem.printMemory();
    }
}