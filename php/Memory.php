<?php
include("Hardware.php");

class Memory extends Hardware
{
    private $frequency = 0;
    private $memorySize = 0;
    private $supportCuda = false;

    public function __construct($frequency = 0, $memorySize = 0, $supportCuda = false)
    {
        $this->frequency = $frequency;
        $this->memorySize = $memorySize;
        $this->supportCuda = $supportCuda;
    }

    public function getFrequency()
    {
        return $this->frequency;
    }
    public function setFrequency($frequency)
    {
        $this->frequency = $frequency;
    }

    public function getMemorySize()
    {
        return $this->memorySize;
    }
    public function setMemorySize($memorySize)
    {
        $this->memorySize = $memorySize;
    }

    public function isSupporCuda()
    {
        return $this->supportCuda;
    }
    public function setSupportCuda($supportCuda)
    {
        $this->supportCuda = $supportCuda;
    }

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
