<?php
include("Hardware.php");
// Memory merupakan turunan Hardware
class Memory extends Hardware
{
    // attribute Memory
    private $frequency = 0;
    private $memorySize = 0;
    private $supportCuda = false;
    // contructor
    public function __construct($frequency = 0, $memorySize = 0, $supportCuda = false)
    {
        $this->frequency = $frequency;
        $this->memorySize = $memorySize;
        $this->supportCuda = $supportCuda;
    }
    // getter setter frequency
    public function getFrequency()
    {
        return $this->frequency;
    }
    public function setFrequency($frequency)
    {
        $this->frequency = $frequency;
    }
    // getter setter memorySize
    public function getMemorySize()
    {
        return $this->memorySize;
    }
    public function setMemorySize($memorySize)
    {
        $this->memorySize = $memorySize;
    }
    // getter setter supportCuda
    // getter menggunakan is karena attribute merupakan boolean
    public function isSupporCuda()
    {
        return $this->supportCuda;
    }
    public function setSupportCuda($supportCuda)
    {
        $this->supportCuda = $supportCuda;
    }
    // method untuk menampilkan semua attribute Memory
    public function printMemory()
    {
        echo "Frequency: " . $this->getFrequency() . "Mhz<br/>";
        echo "Memory Size: " . $this->getMemorySize() . "GB<br/>";
        echo "Support Cuda: ";
        if ($this->isSupporCuda()) {
            echo "Yes<br/>";
        } else {
            echo "No<br/>";
        }
    }
}
