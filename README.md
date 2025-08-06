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

1. `set` – Set the size and distribution type (Uniform or Gaussian)
2. `mean` – Show mean of current data
3. `min` – Show minimum value
4. `max` – Show maximum value
5. `stddev` – Show standard deviation
6. `hist` – Display histogram (10 bins)
7. `summary` – Show all statistics + histogram
8. `help` – List all available commands
9. `exit` – Exit the program

---

## 📌 Notes

- Maximum array size: **100,000**
- Histogram bin count: **10**
- Maximum stars per bin in histogram: **50**
- Uses **Box-Muller** method for generating Gaussian distribution
---

## 🛠 Technologies Used

- **C Language**
- **GCC Compiler**
- **Math Library** (`math.h`)
---
## 📸 Sample Output

![Program Output](/images/Screenshot 2025-08-07 013010.png)


## ✅ Author

Made with ❤️ by [Ajmain Fayek Diganta](https://github.com/DIGANTA100)  
🔗 [GitHub Profile](https://github.com/DIGANTA100)
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
