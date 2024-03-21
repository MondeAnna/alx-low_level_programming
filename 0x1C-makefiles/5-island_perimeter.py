#!/usr/bin/python3
"""Tech Interview Prep: Provide perimeter of island described by `grid`"""


class Cell:
    """cell object used to represent land coordinates"""

    def __init__(self, row, col):
        self.row = row
        self.col = col


def is_horizontal_stack(cell, comparee):
    """
    Checks if two cells are side by side

    Parameters
    ----------
    cell : nametuple
        row and col coordinates of cell being compared against

    comparee : nametuple
        row and col coordinates of cell acting as comparee

    Return
    ------
    bool
        True if cells share horizontal adjescency, else False
    """

    return cell.row == comparee.row and cell.col == comparee.col - 1


def is_vertical_stack(cell, comparee):
    """
    Checks if two cells are one atop the other

    Parameters
    ----------
    cell : nametuple
        row and col coordinates of cell being compared against

    comparee : nametuple
        row and col coordinates of cell acting as comparee

    Return
    ------
    bool
        True if cells share vertical adjescency, else False
    """

    return cell.col == comparee.col and cell.row == comparee.row - 1


def calc_perimeter(coords, count):
    """
    Calculates the number of parameters not shared between
    cells

    Parameters
    ----------
    coords : list[tuple]
        list holding the coordinates of each cell making up
        the island

    count : the number of sides to the cells not adjascent
            to land

    Return:
    int
        the length (in number of cells) of the island
    """

    if not coords:
        return count

    cell = Cell(*coords[0])
    rest = coords[1:]

    for row, col in rest:
        comparee = Cell(row, col)

        if is_horizontal_stack(cell, comparee):
            count -= 2
        elif is_vertical_stack(cell, comparee):
            count -= 2

    return calc_perimeter(rest, count)


def extract_coords(grid):
    """
    Extract coordinates of cells describing land from
    the provided grid

    Parameter
    ---------
    grid : list[list]
        2-D grid of integers describing land and water

    Return
    ------
        list holding the coordinates of each cell making up
        the island
    """
    return [
        (row, col)
        for row in range(len(grid))
        for col in range(len(grid[row]))
        if grid[row][col]
    ]


def island_perimeter(grid):
    """
    Provide the length of the perimeter as described by
    the provided grid

    Parameter
    ---------
    grid : list[list]
        2-D grid of integers describing land and water

    Return
    ------
    int
        the length (in number of cells) of the island
    """

    coords = extract_coords(grid)
    count = len(coords) * 4
    return calc_perimeter(coords, count)


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
