# Advanced Scientific Calculator

A comprehensive scientific calculator implemented in both C programming language and modern web technologies. This project provides extensive mathematical functions including arithmetic, trigonometric, exponential, hyperbolic, and advanced mathematical operations.

## Features

### Core Functions
- **Arithmetic Operations**: Addition, Subtraction, Multiplication, Division, Modulus, GCD, LCM
- **Trigonometric Functions**: Sine, Cosine, Tangent, Cosecant, Secant, Cotangent, and their inverses
- **Exponential & Logarithmic**: e^x, natural log, common log, binary log, custom base logs, 10^x, 2^x
- **Hyperbolic Functions**: sinh, cosh, tanh, csch, sech, coth, and their inverses
- **Other Functions**: Square root, cube root, power, absolute value, floor, ceiling, rounding, factorial, nth root
- **Advanced Functions**: Gamma function, error functions, fractional parts, sign function
- **Resistance Color Coding**: Calculate resistor values from color bands

### Special Features
- **Physical Constants**: Comprehensive database of fundamental physical constants (electromagnetic, quantum, particle masses, etc.)
- **Unit Conversions**: Degrees to radians and vice versa
- **Error Handling**: Robust input validation and mathematical error checking

## Project Structure

```
scientific-calculator/
├── main.c                 # Main C program
├── functions.h           # Function declarations
├── constants.h           # Physical constants definitions
├── resistor.h            # Resistance color coding utilities
├── web-calculator/       # Web-based version
│   ├── src/
│   │   ├── app/
│   │   │   ├── page.tsx          # Main React component
│   │   │   ├── api/
│   │   │   │   └── calculate/    # API endpoint for calculations
│   │   │   │       └── route.ts
│   │   │   └── globals.css       # Global styles
│   │   └── lib/
│   │       ├── mathFunctions.ts  # Mathematical computations
│   │       ├── resistor.ts       # Resistance calculations
│   │       └── constants.ts      # Physical constants
│   ├── package.json
│   ├── next.config.ts
│   └── tailwind.config.ts
└── README.md
```

## Installation & Usage

### C Version

#### Prerequisites
- GCC compiler
- Windows/Linux/macOS

#### Building
```bash
gcc main.c -o calculator -lm
```

#### Running
```bash
./calculator
```

### Web Version

#### Prerequisites
- Node.js (v16 or higher)
- npm or yarn

#### Installation
```bash
cd web-calculator
npm install
```

#### Development
```bash
npm run dev
```

Open [http://localhost:3000](http://localhost:3000) in your browser.

#### Building for Production
```bash
npm run build
npm start
```

## Technical Details

### C Implementation
- **Language**: C with math.h library
- **Architecture**: Modular design with separate header files
- **Features**: Console-based interface with menu-driven navigation
- **Error Handling**: Comprehensive validation for mathematical operations

### Web Implementation
- **Framework**: Next.js 16 with TypeScript
- **Frontend**: React with Tailwind CSS
- **Backend**: Next.js API routes
- **Styling**: Responsive design with modern UI components
- **Features**: Interactive web interface with real-time calculations

## Mathematical Functions

### Trigonometric Functions
- Basic: sin, cos, tan, csc, sec, cot
- Inverse: arcsin, arccos, arctan
- Conversions: degrees ↔ radians

### Exponential & Logarithmic
- Exponential: e^x
- Logarithms: ln(x), log₁₀(x), log₂(x), logₐ(x)
- Power functions: 10^x, 2^x

### Special Functions
- Gamma function Γ(x)
- Error functions: erf(x), erfc(x)
- Statistical: factorial, combinations, permutations

## API Reference (Web Version)

### POST /api/calculate

Calculate mathematical operations.

**Request Body:**
```json
{
  "operation": "arithmetic|trigonometric|exponential|hyperbolic|other|advanced|resistor",
  "choice": 1,  // Sub-operation choice (for non-resistor operations)
  "a": 1.0,     // First operand
  "b": 2.0,     // Second operand (when applicable)
  "band3": 100  // Third band for resistor calculations
}
```

**Response:**
```json
{
  "result": 3.0
}
```

## Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Mathematical functions implemented using standard C libraries
- Web interface built with modern React and Next.js
- Physical constants sourced from NIST and scientific literature
- UI design inspired by scientific calculator interfaces

## Screenshots

### C Version Console Interface
```
========================================
   ADVANCED SCIENTIFIC CALCULATOR
========================================

========================================
1. Arithmetic Operations
2. Trigonometric Functions
3. Exponential and Logarithmic Functions
4. Hyperbolic Functions
5. Other Mathematical Functions
6. Advanced Mathematical Functions
7. View Physical Constants
========================================
Select an option (1-7): 1

--- Arithmetic Operations ---
Enter two numbers: 2 3

--- Select Arithmetic Operation ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus (Integer only)
6. GCD (Greatest Common Divisor)
7. LCM (Least Common Multiple)
Enter your choice (1-7): 1

Addition: 2.000000 + 3.000000 = 5.000000
```

### Web Version Interface
- Interactive button-based navigation
- Real-time calculation results
- Responsive design for mobile and desktop
- Modern UI with hover effects and animations

## Future Enhancements

- [ ] Graphing calculator functionality
- [ ] Unit conversion tools
- [ ] History of calculations
- [ ] Export calculation results
- [ ] Mobile app versions
- [ ] Integration with external APIs for advanced computations