# Cadre QuantLib

A Cadre distribution of [QuantLib](https://github.com/lballabio/QuantLib),
the open-source C++ library for quantitative finance, modeling, trading,
and risk management.

This repository imports the upstream commit history. The Git author field
identifies the Cadre importer; original authors and source commit IDs are retained
in commit trailers. Commit dates and count match upstream. Cadre packaging is
folded into the final imported commit; its date belongs to upstream, not the
packaging work. See [PROVENANCE.md](PROVENANCE.md).
Cadre changes currently cover repository branding and documentation.
Original contributors retain credit for their work.

## Get started

```bash
git clone https://github.com/0xmeataxe/cadre-quantlib.git
cd cadre-quantlib
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel 2
./build/test-suite/quantlib-test-suite --log_level=message
```

The library requires a C++17 compiler, CMake, and Boost. Consult the
[upstream installation guide](https://www.quantlib.org/install.shtml)
for platform prerequisites and alternative build systems.
The C++ namespace, headers, library names, and build targets remain `QuantLib`
compatible; Cadre is the distribution name.

## Documentation

- [Library usage and design](https://www.quantlib.org/docs.shtml)
- [Upstream API reference](https://www.quantlib.org/reference/)
- [Documentation sources](Docs/pages)
- [Examples](Examples)
- [Upstream release history](https://www.quantlib.org/reference/history.html)

Generated documentation uses the Cadre QuantLib project title.
Upstream documentation and releases are maintained by the QuantLib project.

## Feedback and contributions

Report Cadre packaging and documentation issues in
[this repository](https://github.com/0xmeataxe/cadre-quantlib/issues).
For upstream library questions, see the
[QuantLib mailing lists](https://www.quantlib.org/mailinglists.shtml).
See [CONTRIBUTING.md](CONTRIBUTING.md) for upstream contribution guidance.

## License and attribution

QuantLib is distributed under its modified BSD license; see
[LICENSE.TXT](LICENSE.TXT) and [contributors](Docs/pages/authors.docs).
Original copyright notices, license terms, and source attribution are
preserved. Upstream development history is available in the original repository. This distribution does not imply endorsement by upstream authors.
