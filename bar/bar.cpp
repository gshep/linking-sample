#include "bar.h"

#include <cstring>

#include "version.h"

Bar::Bar()
{
}

int Bar::getDescription(char * description_)
{
    const char description[] = "bar library uses libversion x.x.x, number = ";
    const int descriptionSize(sizeof(description));

    if (0 == description_)
    {
        /* including zero terminating symbol */
        return descriptionSize + 1;
    }

    Version_s version(get_version2());
    int n(get_number());
    std::strcat(description_, description);
    description_[descriptionSize - 17] = version.major + '0';
    description_[descriptionSize - 15] = version.minor + '0';
    description_[descriptionSize - 13] = version.bugfix + '0';

    if (n > 9 || n < 0)
        description_[descriptionSize - 1] = 'X';
    else
        description_[descriptionSize - 1] = '0' + n;

    description_[descriptionSize] = 0;
    return 0;
}
