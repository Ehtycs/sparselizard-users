#include "sparselizard_wrapper.h"

#include "user.h"

namespace py = pybind11;

void init_user(py::module &m)
{
    py::class_<myexp>(m, "myexp")
    
        .def(py::init<>())

        .def("yeet", &myexp::yeet, py::arg("name"))
    ;
}

