class Integer {
    public:
        Integer(int iVal);

        Integer();

        Integer(const Integer& iVal);

        Integer operator =(const Integer& iVal);

        operator int() const;

        Integer operator +(const Integer& iVal) const;

        Integer operator -(const Integer& iVal) const;

        Integer operator *(const Integer& iVal) const;

        Integer operator /(const Integer& iVal) const;

        const Integer& operator ++();

        Integer operator ++(int);

        const Integer& operator --();

        Integer operator --(int);

    private:
        int m_iVal;
};
