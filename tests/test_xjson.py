from xjson import dumps, loads


def test_dumps():
    assert dumps({"Hello": "World"}) == '{"Hello":"World"}'


def test_loads():
    assert loads('{"Hello": "World"}') == {"Hello": "World"}
