
function calcular(id) {

    valor1 = document.getElementById("valor1").value;
    valor2 = document.getElementById("valor2").value;
    resultado = document.getElementById("resultado");
    operador = document.getElementById("operador").value;

    switch(operador) {
        case '+':
            total = parseFloat(valor1) + parseFloat(valor2);
            resultado.innerHTML="";
            resultado.innerHTML = total;
        break;

        case '-':
            total = parseFloat(valor1) - parseFloat(valor2);
            resultado.innerHTML="";
            resultado.innerHTML = total;
        break;

        case '/':
            total = parseFloat(valor1) / parseFloat(valor2);
            totalArredondado = parseFloat(total.toFixed(3))
            resultado.innerHTML="";
            resultado.innerHTML = totalArredondado;
        break;

        case '*':
            total = parseFloat(valor1) * parseFloat(valor2);
            resultado.innerHTML="";
            resultado.innerHTML = total;
        break;
    }
}