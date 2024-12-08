actor Calculator {
    var gf : Int = 0;
    
    // Toplama işlemi
    public func add(value : Int) : async Int {
        gf += value;
        return gf;
    };
    
    // Çıkarma işlemi
    public func subtract(value : Int) : async Int {
        gf -= value;
        return gf;
    };
    
    // Çarpma işlemi
    public func multiply(value : Int) : async Int {
        gf *= value;
        return gf;
    };
    
    // Bölme işlemi
    public func divide(value : Int) : async ?Int {
        if (value == 0) {
            return null; // Hata: Sıfıra bölme
        } else {
            gf /= value;
            return ?gf;
        };
    };
    
    // Mevcut değeri sıfırlar
    public func clear() : async () {
        gf := 0;
    };
    
    // Mevcut değeri döndürür
    public func currentValue() : async Int {
        return gf;
    };
};
