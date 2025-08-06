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

## 🔧 How to Compile

Make sure you have GCC installed.

```bash
gcc data_analyzer.c -o analyzer -lm
