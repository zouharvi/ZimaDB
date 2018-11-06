#ifndef QUERY_H
#define QUERY_H

#include <vector>
#include <string>
#include <iostream>
#include <exception>
#include <memory>
#include "create_table.h"
#include "drop_table.h"
#include "truncate_table.h"
#include "select.h"
#include "insert.h"
#include "update.h"
#include "delete.h"
#include "utils/text_utils.h"

class Query {
    public:
        Query(const std::vector<std::string>&);
        std::unique_ptr<QueryBase> data;
        bool ok = true;

    private:
        // this shouldn't compile unless QueryType is a subclass of QueryBase
        template <class QueryType> void try_parse(const std::vector<std::string>&);
};  

#endif
