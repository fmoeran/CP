struct mod {
    const long long M = 1e9+7;

    long long val;
    mod() {val = 0;}
    mod(const mod& other) {val = other.val;}
    mod operator=(mod other) {val = other.val; return val;}
    template<typename T> mod(T other) {val = other%M;}
    template<typename T> operator=(T other) {val = (long long)other;}

    long long operator()() {return val;}

    bool operator ==(mod other) {return val == other.val;}
    bool operator < (mod other) {return val < other.val;}
    bool operator <=(mod other) {return val <= other.val;}
    bool operator > (mod other) {return val > other.val;}
    bool operator >=(mod other) {return val >= other.val;}

    mod operator + (mod other) {return (val + other.val)%M;}
    mod operator - (mod other) {return (val + M - other.val)%M;}
    mod operator +=(mod other) {*this=*this+other; return *this;}
    mod operator -=(mod other) {*this=*this-other; return *this;}
    mod operator ++(int) {mod result=*this; *this+=1; return result;}
    mod operator ++() {*this+=1; return *this;}
    mod operator --(int) {mod result=*this; *this-=1; return result;}
    mod operator --() {*this-=1; return *this;}

    mod operator *(mod other) {return (val * other.val)%M;}
    mod operator *=(mod other) {*this=(*this)*other; return *this;}

    mod power(mod other) {
        if (other == 0) return 1;
        mod out = this->power(other()/2);
        out *= out;
        if (other()%2 == 1) out *= *this;
        return out;
    }

    mod inverse() {return power(M-2);}

    mod operator /(mod other) {return (*this) * other.inverse();}
    mod operator/=(mod other) {*this=*this/other; return*this;}
};

std::ostream &operator<<(std::ostream &os, mod const &m) {
    os << m.val;
}

std::istream &operator>>(std::istream &os, mod const &m) {
    os >> m.val;
}
