/*    N.B. do not allocate memory,
   instead: return a string literal  */

const char *bmi (int weight, double height)
{

    double bmi_calc = weight / (height * height);

    if(bmi_calc <= 18.5){
        return "Underweight";
    }
    else if(bmi_calc <= 25.0){
        return "Normal";
    }
    else if(bmi_calc <= 30.0){
        return "Overweight";
    }
    else if(bmi_calc > 30.0){
        return "Obese";
    }
}