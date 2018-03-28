#ifndef ASTEROBOCAL_HPP
#define ASTEROBOCAL_HPP

class AsteroBocal: public IAsteroid
{
    public:
        AsteroBocal(void);
        AsteroBocal(std::string name);        
        AsteroBocal(AsteroBocal const & src);
        virtual ~AsteroBocal() {}
        virtual std::string beMined(StripMiner *) const;
        virtual std::string beMined(DeepCoreMiner *) const;        
        virtual std::string getName() const;
        AsteroBocal &operator=(AsteroBocal const & rhs);
        
    private:
        std::string _name;
};

#endif