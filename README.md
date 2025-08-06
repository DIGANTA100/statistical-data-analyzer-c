# 📊 Statistical Data Analyzer in C

A command-line C program that generates, analyzes, and visualizes statistical data using **uniform** or **Gaussian** distributions. It allows users to interactively perform operations like setting data, calculating mean, min, max, standard deviation, and generating histograms.

---

## 🚀 Features

- 🔢 **Random Data Generation**
  - Uniform distribution
  - Gaussian distribution (via Box-Muller Transform)
- 📊 **Statistical Analysis**
  - Mean
  - Minimum and Maximum
  - Standard Deviation
- 🌟 **Histogram Visualization**
  - 10-bin histogram
  - Scaled with a max of 50 stars
- 💻 **Interactive Command Line Interface**
  - `set`, `mean`, `min`, `max`, `stddev`, `hist`, `summary`, `help`, `exit`

---

## 📝 Sample Commands (Inside the Program)

set         # Set the size and distribution type (Uniform or Gaussian)
mean        # Show mean of current data
min         # Show minimum value
max         # Show maximum value
stddev      # Show standard deviation
hist        # Display histogram (10 bins)
summary     # Show all statistics + histogram
help        # List all available commands
exit        # Exit the program
---

## 🔧 How to Compile

Make sure you have GCC installed.

```bash
gcc data_analyzer.c -o analyzer -lm
```

## ▶️ How to Run
```bash
./analyzer
```
