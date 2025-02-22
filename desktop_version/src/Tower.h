#ifndef TOWER_H
#define TOWER_H

class towerclass
{
public:
    towerclass(void);

    int backat(int xp, int yp, int yoff);

    int at(int xp, int yp, int yoff);

    int miniat(int xp, int yp, int yoff);

    void loadminitower1(void);

    void loadminitower2(void);

    void loadbackground(void);

    void loadmap(void);

    short back[40 * 120];
    short contents[40 * 700];
    short minitower[4 * 1300];

    bool minitowermode;

    int framestomove;
};





#endif /* TOWER_H */
