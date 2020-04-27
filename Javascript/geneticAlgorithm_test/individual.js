class Individual{
    //Aquí van atributos del individuo

    constructor(genes){
        this.adn = []; //atributo del individuo
        for (var i = 0; i < genes; i++){
            this.adn[i] = char(random(64,123));
            if (this.adn[i] == '@'){
                this.adn[i] = char(32);
            }
        }
    }
    //Aquí van los métodos
    show(posy){
        textSize(32);
        fill(255);
        var str = this.adn.join("");
        text(str,(width-textWidth(str))/2,posy); //Acomodar texto en el centro
    }
}