#include "sparselizard_wrapper.h"

#include "user.h"

namespace py = pybind11;

void init_user(py::module &m)
{
    m.def("getvecdata", &getvecdata, py::arg("slvector"));
    m.def("setvecdata", &setvecdata, py::arg("slvector"), py::arg("values"));
    m.def("getcsrdata", &getcsrdata, py::arg("slmat"));
    m.def("setcsrdata", &setcsrdata, py::arg("slmat"), 
          py::arg("rowi"), py::arg("coli"), py::arg("vals"));
}

