<?php

function ordenar($array){
    for ($i = 1; $i < count($array); $i++)
    {
        $valor = $array[$i];
        $j = $i - 1;

        while ($j >= 0 && $array[$j] <= $valor)
        {
            $array[$j + 1] = $array[$j];
            $j = $j - 1;
        }
        $array[$j + 1] = $valor;
	}

	return $array;
}

function tercerMayor($array){
	$array_ordenado = ordenar($array);
	$k = 0;
	$valor = NULL;
	while($k < 3 && $k < count($array_ordenado)){
			if($valor != $array_ordenado[$k]){
			$valor = $array_ordenado[$k];
			$k++;
		}
	}
	echo $valor, "\n";
}

tercerMayor([1,3,2,2,4]);
tercerMayor([1,4]);
tercerMayor([1,3,7,16,4]);
tercerMayor([121,32,74,16,4]);
tercerMayor([1,3,2,2,4]);

