const display = document.getElementById("display");
const display3 = document.getElementById("display-3");
let date = new Date().toLocaleDateString("pt-br");
let time = new Date().toLocaleTimeString("pt-br");

function showCurrentDateTime() {
  display.innerHTML = `<h4>Data: ${date}</h4>
                        <h4>Hora: ${time}</h4>`;
}

function showCurrentTime() {
  display.innerHTML = `<h4>Hora: ${time}</h4>`;
}

function showAlert() {
  alert(time);
}

function fibonacci() {
  const value = document.getElementById("fibonacci-input").value;
  const sequencia = [];
  sequencia[0] = 0;
  sequencia[1] = 1;
  for (let i = 2; i < value; i++) {
    let current = sequencia[i - 2] + sequencia[i - 1];
    if (current <= value) {
      sequencia[i] = current;
    } else break;
  }
  display3.innerHTML = `<p>Fibonacci: ${sequencia
    .toString()
    .split(",")
    .join(", ")}
    </p>`;
}

function calculatePerfectNumbers() {
  const perfectNumbers = [];
  const min = Number(document.getElementById("min-perfect-number-input").value);
  const max = Number(document.getElementById("max-perfect-number-input").value);

  for (let i = min; i <= max; i++) {
    let sum = 0;
    for (let j = 1; j < i; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }
    if (i == sum) {
      perfectNumbers.push(i);
    }
  }
  console.log(perfectNumbers);
  display3.innerHTML = `<p>Números perfeitos: ${perfectNumbers
    .toString()
    .split(",")
    .join(", ")}
    </p>`;
}

function isPrime() {
  const value = document.getElementById("is-prime-input").value;
  let cont = 0;
  for (let i = 1; i <= value; i++) {
    if (value % i == 0) {
      cont++;
    }
  }
  if (cont == 2) {
    display3.innerHTML = "<p>É primo</p>";
  } else {
    display3.innerHTML = "<p>Não é primo</p>";
  }
}

function calculateFactorial() {
  const value = document.getElementById("factorial-input").value;
  function factorial(value) {
    if (value == 1) {
      return 1;
    } else {
      return value * factorial(value - 1);
    }
  }
  const result = factorial(value);
  display3.innerHTML = `<p>Fatorial: ${result}</p>`;
}

function triangle() {
  const a = Number(document.getElementById("triangle-a-input").value);
  const b = Number(document.getElementById("triangle-b-input").value);
  const c = Number(document.getElementById("triangle-c-input").value);

  if (c > a + b || a > b + c || b > a + c) {
    display3.innerHTML = `<p>Não formam um triângulo</p>`;
  } else {
    if (a == b && b == c && c == a) {
      display3.innerHTML = `<p>É um triângulo equilátero</p>`;
    } else if (
      (a == b && b != c && a != c) ||
      (b == c && b != a && a != c) ||
      (a == c && b != c && a != b)
    ) {
      display3.innerHTML = `<p>É um triângulo isósceles</p>`;
    } else if (a != b && a != c && b != c) {
      display3.innerHTML = `<p>É um triângulo escaleno</p>`;
    }
  }
}

// function multiplyMatrices(matriceA, matriceB) {
//   let newMatrice = []
//   let line = [0, 0, 0]
//   for(let i = 0; i < 3; i++){
//     for(let j = 0; i < 3; j++){
//       for(let k = 0; k < 3; k++){
//         line[i][j] += matriceA[j][k] * matriceB[k][j]
//       }
//     }
//     newMatrice.push(line)
//   }
//   console.log(newMatrice);
/*

  | 1 2 3 |   | 9 8 7 |   | 1*9 + 2*6 + 3*3 = a[0][0] * b[0][0] + a[0][1] * b[1][0]
  | 4 5 6 | x | 6 5 4 | = |
  | 7 8 9 |   | 3 2 1 |   |

  i
  00*00 + 01*10 + 02*20 = n[0][0]
  00*01 + 01*11 + 02*21 = n[0][1]
  00*02 + 01*12 + 02*22 = n[0][2]

  10*00 + 11*10 + 12*20 = n[1][0]
  10*01 + 11*11 + 12*21 = n[1][1]
  10*02 + 11*12 + 12*22 = n[1][2]

  20*00 + 21*10 + 22*20 = n[2][0]
  20*01 + 21*11 + 22*21 = n[2][1]
  20*02 + 21*12 + 22*22 = n[2][2]

*/
//}

function validateCpf() {
  const cpf = document.getElementById("validate-cpf-input").value;

  function validate(cpf) {
    if (cpf.length != 11) {
      display3.innerHTML = `<p> o CPF é inválido</p>`;
    } else {
      let valid = true;
      for (let i = 0; i < cpf.length; i++) {
        if (isNaN(cpf[i])) {
          valid = false;
          break;
        }
      }

      if (valid) {
        //Fazendo o cálculo
        let sum = 0;
        let j = 0;
        for (let i = 10; i > 1; i--) {
          sum += Number(cpf[j]) * i;
          j++;
        }
        let restoDivisao = (sum * 10) % 11;
        if (restoDivisao == 10) {
          restoDivisao = 0;
        }
        if (restoDivisao != Number(cpf[9])) {
          display3.innerHTML = `<p> o CPF ${print(cpf)} é inválido</p>`;
        } else {
          let otherSum = 0;
          let j = 0;
          for (let i = 11; i > 1; i--) {
            otherSum += Number(cpf[j]) * i;
            j++;
          }
          let restoDivisao = (otherSum * 10) % 11;
          if (restoDivisao == 10) {
            restoDivisao = 0;
          }
          if (restoDivisao != Number(cpf[10])) {
            display3.innerHTML = `<p> o CPF ${print(cpf)} é inválido</p>`;
          } else {
            display3.innerHTML = `<p> o CPF ${print(cpf)} é válido</p>`;
          }
        }
      } else {
        display3.innerHTML = `<p> o CPF ${print(cpf)} é inválido</p>`;
      }
    }
  }

  function print(cpf) {
    let cpfFormatado = "";
    for (let i = 0; i < 3; i++) {
      cpfFormatado += cpf[i];
    }
    cpfFormatado += ".";
    for (let i = 3; i < 6; i++) {
      cpfFormatado += cpf[i];
    }
    cpfFormatado += ".";
    for (let i = 6; i < 9; i++) {
      cpfFormatado += cpf[i];
    }
    cpfFormatado += "-";
    for (let i = 9; i < 11; i++) {
      cpfFormatado += cpf[i];
    }
    return cpfFormatado;
  }

  validate(cpf);
}
