#include <string>

class Long {
    public:
        Long();

        Long(const long lval);

        Long(const Long& lval);

        const Long& operator =(const Long& lval);

        const std::string& toString();

        void longValue(const std::string& lval);

        long getValue() const;

        void setValue(const long lval);

        operator long() const;

        operator std::string();

        Long operator +(const Long& lval) const;

        Long operator -(const Long& lval) const;

        Long operator *(const Long& lval) const;

        Long operator /(const Long& lval) const;

        Long& operator *();

        Long* operator ->();

    private:
        long m_lval;
        std::string m_strVal;
};