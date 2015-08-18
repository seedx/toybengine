#ifndef TOYBENGINE_PARSER_H
#define TOYBENGINE_PARSER_H

class CSSRule {
public:
    std::string selector;
    std::vector<CSSProperty> *properties;
    CSSRule() {
        properties = new std::vector<CSSProperty>();
    }
};

class CSSProperty {
public:
    std::string name;
    std::string value;
};

class Parser {
    public:
    static std::vector<CSSRule>* Parse(std::string* source) {
        auto rules = new std::vector<CSSRule>();
        std::size_t len = source->length(); 
        std::size_t i = 0;
        std::size_t opn_br_pos = -1;
        opn_br_pos = source.find("{", i);

        if (opn_br_pos == str::npos) {
            // TODO: implement log
            log_warning("invalid css after %d", i);
        }

        std::string selector = source.substr(i, opn_br_pos);
        CSSRule rule = new CSSRule();
        rule.selector = selector;
        std::size_t cls_br_pos = source.find("}", curr);

        if (cls_br_pos == str::npos) {
            log_warning("invalid css after %d", curr);
        }

        rule->properties;
        
        return rules;
    } 
};


#endif //TOYBENGINE_PARSER_H
