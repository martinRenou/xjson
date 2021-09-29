
#include "nlohmann/json.hpp"

#include "pybind11/pybind11.h"

#include "pybind11_json/pybind11_json.hpp"

namespace py = pybind11;
namespace nl = nlohmann;

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)


std::string dumps(const nl::json& json)
{
    return json.dump();
}

py::object loads(const std::string& json)
{
    return nl::json::parse(json);
}


PYBIND11_MODULE(xjson, m)
{
    m.doc() = "Simple Python JSON library based on pybind11_json";
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);

    m.def("dumps", &dumps, "Dump JSON-like Python object into string");
    m.def("loads", &loads, "Load JSON from string into Python object");
}
