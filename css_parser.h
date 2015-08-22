#ifndef TOYBENGINE_PARSER_H
#define TOYBENGINE_PARSER_H

#include <string>
#include <vector>

class CSSProperty {
public:
    std::string name;
    std::string value;
};

class CSSRule {
public:
    std::string selector;
    std::vector<CSSProperty> *properties;
    CSSRule() {
        properties = new std::vector<CSSProperty>();
    }
};

class Parser {
    public:
    static std::vector<CSSRule>* Parse(const std::string& source) {
        auto rules = new std::vector<CSSRule>();
        std::size_t len = source.length();
        std::size_t i = 0;
        std::size_t opn_br_pos = -1;
        opn_br_pos = source.find("{", i);

        if (opn_br_pos == std::string::npos) {
            // TODO: implement log
            // log_warning("invalid css after %d", i);
        }

        std::string selector = source.substr(i, opn_br_pos);
        CSSRule* rule = new CSSRule();
        rule->selector = selector;
        std::size_t cls_br_pos = source.find("}", opn_br_pos);

        if (cls_br_pos == std::string::npos) {
            // log_warning("invalid css after %d", curr);
        }

        rule->properties = ParseProperties(source.substr(opn_br_pos, cls_br_pos);
        
        return rules;
    } 
    
    static std::vector<CSSProperty>* ParseProperties(const std::string& source) {
        std::size_t len = source.length();
        std::size_t i = 0;
        std::size_t colon_pos = -1;
        colon_pos = source.find(":", i);

        if (opn_br_pos == std::string::npos) {
            // TODO: implement log
            // log_warning("invalid css after %d", i);
        }

        std::string selector = source.substr(i, opn_br_pos);
        CSSRule* rule = new CSSRule();
        rule->selector = selector;
        std::size_t cls_br_pos = source.find("}", opn_br_pos);

        if (cls_br_pos == std::string::npos) {
            // log_warning("invalid css after %d", curr);
        }

    }
};


#endif //TOYBENGINE_PARSER_H
