double getBmi(double height, double weight) {
    height /= 100;
    return weight / height / height;
}
