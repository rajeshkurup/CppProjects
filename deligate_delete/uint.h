class UInt {
    public:
        UInt(int iVal);

        UInt();

        // No Copy Allowed
        UInt(const UInt& iVal) = delete;

        // No Assignment Allowed
        UInt operator =(const UInt& iVal) = delete;

        operator int() const;

        UInt operator +(const UInt& iVal) const;

        UInt operator -(const UInt& iVal) const;

        UInt operator *(const UInt& iVal) const;

        UInt operator /(const UInt& iVal) const;

        const UInt& operator ++();

        UInt operator ++(int);

        const UInt& operator --();

        UInt operator --(int);

    private:
        int m_iVal;
};
