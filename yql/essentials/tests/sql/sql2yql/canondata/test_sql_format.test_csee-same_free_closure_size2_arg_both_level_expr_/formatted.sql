SELECT
    AsTuple(
        YQL::FlatMap(
            3 / 1, ($x) -> {
                RETURN $x + YQL::FlatMap(
                    1 / 1, ($y) -> {
                        RETURN Just($x + $y);
                    }
                );
            }
        ),
        YQL::FlatMap(
            3 / 1, ($x) -> {
                RETURN $x + YQL::FlatMap(
                    1 / 1, ($y) -> {
                        RETURN Just($x + $y);
                    }
                );
            }
        )
    )
;
