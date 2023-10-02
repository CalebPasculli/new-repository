#include "Invoice.h"
Invoice::Invoice(){
invoiceId = "";
dollarsOwed = 0;
}
Invoice::Invoice(std::string invoiceId){
Invoice::invoiceId = invoiceId;
dollarsOwed = 0;
}
void Invoice::addServiceCost(int costDollars){
if (Invoice::dollarsOwed += costDollars > 0){
    Invoice::dollarsOwed += costDollars;
}else{
    Invoice::dollarsOwed = 0;
}

}
int Invoice::getDollarsOwed(){
    return(Invoice::dollarsOwed);
}
std::string Invoice::getInvoiceId(){
    return(Invoice::invoiceId);
}