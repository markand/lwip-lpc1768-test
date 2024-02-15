#include "lwip/netif.h"
#include "lwip/tcpip.h"

#include "ethernetif.h"

void
init(void)
{
    struct netif iface;
    ip4_addr_t addr, gw, netmask;

    IP4_ADDR(&addr, 10, 5, 2, 210);
    IP4_ADDR(&gw, 10, 5, 0, 1);
    IP4_ADDR(&netmask, 255, 255, 0, 0);

    tcpip_init(NULL, NULL);

#if 0
    netif_init();
    netif_add(&iface, &addr, &netmask, &gw, NULL, ethernetif_init, tcpip_input);
    netif_set_default(&iface);
    netif_set_up(&iface);

    for (;;) {
        ethernetif_check_link(&iface);
        ethernetif_poll(&iface);
    }
#endif
}

int main(void)
{
    init();


    return 0;
}
